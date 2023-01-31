## 7 Steps to Build a Machine Learning Model with Python

- Loading the dataset
- Understanding the dataset
- Data preprocessing
- Data visualization
- Building a regression model
- Model evaluation
- Model prediction


1. Loading The Data 
```
>>> import pandas as pd
>>> data = pd.read_csv('insurance.csv')
>>> data.head()
```
Download DataSets from [#Kaggle.com](https://kaggle.com)

2. Understanding The Dataset

**Understanding the data is very important before building a machine learning model.**
```
# Let see the number of rows and columns of the datasets
>>> data.shape

>>> data.info() # to get details of data

>>> data.isnull()  # to see missing data

>>> data.isnull().sum() # to see the sum of missing data

>>> data.dtypes # knowing the column types

```

3. Data Preprocessing
```
# convert object types to category types
>>> data['sex'] = data['sex'].astype('category')

>>> data.dtypes # to see the data types again

>>> data.describe().T # to see description of the data in the dataframe

# Grouping with groupby method and using the round method to see only two numbers after the comma.
>>> smoke_data = data.groupby('smoker').mean().round(2)
>>> smoke_data # to see smoke data
```

4. Data Visualization
```

```