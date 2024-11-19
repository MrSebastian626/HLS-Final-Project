#!/usr/bin/env python
import pickle
import numpy as np
from scipy.io import loadmat


model_pickle = open("model.dat", "rb")
model = pickle.load(model_pickle)

sat4data = loadmat('/classes/ece2720/fpp/test_x_only.mat')
test_x = sat4data["test_x"]

# sat4data = loadmat('sat-4-full.mat')
# test_x = sat4data["test_x"]


red_array = test_x[:, :, 0, :]
green_array = test_x[:, :, 1, :]
blue_array = test_x[:, :, 2, :]
nir_array = test_x[:, :, 3, :]

redmean = np.reshape(np.mean(red_array, axis=(0, 1)), (100000, 1))
greenmean = np.reshape(np.mean(green_array, axis=(0, 1)), (100000, 1))
bluemean = np.reshape(np.mean(blue_array, axis=(0, 1)), (100000, 1))
nirmean = np.reshape(np.mean(nir_array, axis=(0, 1)), (100000, 1))
redstd = np.reshape(np.std(red_array, axis=(0, 1)), (100000, 1))
greenstd = np.reshape(np.std(green_array, axis=(0, 1)), (100000, 1))
bluestd = np.reshape(np.std(blue_array, axis=(0, 1)), (100000, 1))
nirstd = np.reshape(np.std(nir_array, axis=(0, 1)), (100000, 1))
test_x_final = np.hstack((redmean, greenmean, bluemean, nirmean,
                          redstd, greenstd, bluestd, nirstd))


predicted = model.predict(test_x_final)
guesses = []
for i in range(100000):
    if predicted[i] == 1:
        guesses.append("barren land")
    elif predicted[i] == 2:
        guesses.append("trees")
    elif predicted[i] == 3:
        guesses.append("grassland")
    else:
        guesses.append("none")

s = ','.join([s for s in guesses])

# Write said string to landuse.csv
f = open('landuse.csv', 'w')
f.write(s)
f.close()
