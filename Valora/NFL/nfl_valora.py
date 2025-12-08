import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import math
import pandas as pd
import numpy as np
import time
import csv
from keras.models import Sequential
from keras.layers import Dense, Activation
from keras.layers import LSTM
import tensorflow as tf
import nfl_data_py as nfl


def average_of_last_five(lst):
    if len(lst) < 5:
        return sum(lst) / len(lst)
    else:
        return sum(lst[-5:]) / 5



def getdataset(dataset, step):
    X, Y = [], []
    for i in range(len(dataset) - step - 1):
        a = dataset[i:(i+step), 0]
        X.append(a)
        Y.append(dataset[i+step,0])
    return np.array(X), np.array(Y)

def model(data):

    if len(data) % 2 != 0:
        data = data[1:]

    sequence_length = int(len(data)*.5)  # Length of input sequences

    #data = dataset[:sequence_length]
    test_sequence = np.array(data[sequence_length:])


    X = []
    y = []

    for i in range(len(data) - sequence_length):
        X.append(data[i:i+sequence_length])
        y.append(data[i+sequence_length])

    X = np.array(X)
    y = np.array(y)

    # Reshape the input data to match LSTM input shape (samples, time steps, features)
    X = np.reshape(X, (X.shape[0], X.shape[1], 1))

    # Build the LSTM model
    model = Sequential([
        LSTM(units=50, activation='relu', input_shape=(sequence_length, 1)),
        Dense(units=1)
    ])
    model.compile(optimizer='adam', loss='mean_squared_error')

    # Train the model
    model.fit(X, y, epochs=100, batch_size=1, verbose = 0)

    # Predict the next number based on a sequence
    test_sequence = np.reshape(test_sequence, (1, sequence_length, 1))
    predicted_next_number = model.predict(test_sequence)
    return predicted_next_number


def predict(dataset):
    predictions = []
    for i in range(0, 5):
        prediction = model(dataset)
        predictions.append(prediction)

    next_prediction = np.mean(predictions)
    return next_prediction

def valora(stat):
    stat = stat[~np.isnan(stat)]
    prediction = predict(stat)
    return prediction

def get_nfl_data(player_name, statistic):
    weekly_data= nfl.import_weekly_data([2024])
    player_data = weekly_data[weekly_data['player_display_name'] == player_name]
    print(player_data.columns)
    player_stats = player_data[statistic]
    player_stats = np.array(player_stats)

    return player_stats


def plot(data, prediction, y_label, title):


    x_data = np.arange(1, len(data) + 1)
    x = 0
    for i in x_data:
        if x == 0:
            plt.plot(i, data[x], 'ko', label = "Historical " + title)

        else:
            plt.plot(i, data[x], 'ko')
        x = x+1

    plt.plot(len(data)+1, prediction, 'mo', label = "Prediction for " + title)
    plt.xlabel("Games")
    plt.ylabel(y_label)
    plt.title(title)
    plt.legend()
    plt.show()


def main():

    print("****Welcome to Valora****")
    print("Enter 0 to exit")

    while True:
        player_name = (input("Enter Full Name of Player to Predict: "))
        if player_name == 0:
            break

        prediction_statistic = input("Enter statstic to predict rushing_yards, receiving_yards, receptions")

        player_stats = get_nfl_data(player_name, prediction_statistic)

        prediction = valora(player_stats)

        print(predictiond)











main()








