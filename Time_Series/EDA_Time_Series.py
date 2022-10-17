## install the pandas data reader by pip install pandas-datareader
!pip install pandas-datareader


## Importign the liabrarires
import pandas_datareader as pdr
import pandas as pd
from datetime import datetime



## getting data set of previous 5 years from the day of execution
df_tesla=pdr.get_data_yahoo('TSLA')

df_tesla.head()

df_tesla['High'].plot(figsize =(12,4))
## xlimit and ylimit

df_tesla['High'].plot(xlim = ['2020-01-01','2021-09-01'],figsize =(12,4))
df_tesla['High'].plot(xlim = ['2020-01-01','2021-09-01'],ylim = [0,900],figsize =(12,4),ls='--',c = 'green')


df_tesla.loc['2020-01-01':'2021-09-01']



index = df_tesla.loc['2020-01-01':'2021-09-01'].index

Opening_price = df_tesla.loc['2020-01-01':'2021-09-01']['Open']

import matplotlib.pyplot as plt
%matplotlib inline

figure,axis=plt.subplots()
plt.tight_layout()
## to prevent overlapping
figure.autofmt_xdate()

axis.plot(index,Opening_price)



## Datetime Index
df_tesla = df_tesla.reset_index()

df_tesla.info()

pd.to_datetime(df_tesla['Date'])


df_tesla = df_tesla.set_index('Date',drop = True)

df_tesla.head()



## Datetime
from datetime import datetime

date = datetime(2021,11,21)

datetime.now() ##present

df_tesla.resample(rule = 'A').min()


df_tesla.resample(rule = 'A').max()['Open'].plot()
## here rule 'A' means year and frequeny



## for quarterly
df_tesla.resample(rule = 'QS').max()['Open'].plot()

##bUSINESS and freqqnecy
df_tesla.resample(rule = 'BA').max()['High'].plot()


##Now plotting
df_tesla['Open'].resample(rule='BA').mean().plot(kind='bar')



df_tesla['Open'].resample(rule='A').mean().plot(kind='bar')

df_tesla['Open'].resample(rule='M').mean().plot(kind='bar',figsize=(15,6))


df_tesla[['Open','Open: 30 days rolling']].plot(figsize=(12,5))
## rolling graph is smooth as compaired tot hte individual column data in the tSA

