"""
    Cenni sul DeepLearning
        Apprendimento in profondità tramite reti neurali
    Nello specifico vediamo come può essere causato Overfitting (il modello impara a memoria e perde flessibilità)

"""
from sklearn.neural_network import MLPClassifier
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score

n = 100
X = np.random.random(size=(n, 5))
y = np.random.choice(['si', 'no'], size=n)
X_train, X_test, y_train, y_test = train_test_split(X, y)

# Assegno al modello il n° di 'neuroni' nei due strati nascosti
# verbose = 2 printa su console quello che succede
model = MLPClassifier(hidden_layer_sizes=(1000, 500), verbose=2)
model.fit(X_train, y_train)

pred_train = model.predict(X_train)
pred_test = model.predict(X_test)

acc_train = accuracy_score(y_train, pred_train)
acc_test = accuracy_score(y_test, pred_test)

print(f'Train: {acc_train}, Test: {acc_test}')
"""
    Notiamo come l'accuratezza del train sia perfetta mentre quella del test sia pessima
     ==> Il modello ha imparato a memoria !!!
"""
