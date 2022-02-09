""" Misurare le performance di un regressore    """
import numpy as np
from sklearn.metrics import mean_absolute_error, mean_squared_error, r2_score
import seaborn as sbs
import matplotlib.pyplot as plt

y = np.random.random(size = 100) * 10
# errori a caso che variano tra -1 e 1
errors = 2 * (np.random.random(size=100)) - 1
# simuliamo le predizioni
p = y + errors

# Calcolo i vari errori
mse = mean_squared_error(y, p)
mar = mean_absolute_error(y, p)
r2 = r2_score(y, p)

# Calcolo i residui
res = y - p
# Mostro con un grafico come cambiano i Residui in funzione del valore target
sbs.scatterplot(x = y, y = res)
plt.show()

"""
    Dal grafico riesco a capire se sono presenti errori sistematici (es. concentrati in alcune zone o che
    comunque dipendono dal target), oppure sono tutti "casuali", come nel nostro esempio,
    dato che sono tutti molto sparsi.
"""

