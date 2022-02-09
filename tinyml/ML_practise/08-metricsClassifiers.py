import numpy as np
import scikitplot as skplt
from sklearn.metrics import accuracy_score, precision_score, recall_score, f1_score, classification_report
import matplotlib.pyplot as plt

# Mescola l'array restituendone uno che è diverso dal primo per il 'prob'%
def randomize(v, lab, prob = 0.2):
    v2 = []
    for el in v:
        # np.random.random => valore casuale tra 0 e 1
        if np.random.random() > prob:
            v2.append(el)
        else:
            v2.append(np.random.choice(lab))
    return v2


# Array di target
labels = ['cronaca', 'politica', 'sport']
# Ne estraggo 1000
y = np.random.choice(labels, 1000)
p = randomize(y, labels)
acc = accuracy_score(y, p)
print(f'Accuracy = {acc}')

cr = classification_report(y, p)
print(cr)

"""
    Precisione: quante volte il modello ha detto SI ed era veramente SI
    Richiamo: quante volte il modello ha detto SI rispetto alle volte in cui era da dire SI
    F1-score: formula che combina Precisione e Richiamo
"""
skplt.metrics.plot_confusion_matrix(y, p)
plt.show()

