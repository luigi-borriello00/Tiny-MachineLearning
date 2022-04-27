from sklearn.model_selection import train_test_split
from sklearn.datasets import load_iris
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import accuracy_score

dataset = load_iris()

X = dataset['data']
y = dataset['target']

X_train, X_test, y_train, y_test = train_test_split(X, y)

model = DecisionTreeClassifier()
model.fit(X_train, y_train)

p_train = model.predict(X_train)
p_test = model.predict(X_test)

# Con i classificatori si utilizza l'accuracy score
a_train = accuracy_score(y_train, p_train)
a_test = accuracy_score(y_test, p_test)

print(f'Train: {a_test} Train: {a_train}')