import numpy as np
import matplotlib.pyplot as plt

def z(n):
    return sum([2 if k - n + 1 >= 0 else 0 for k in range(-100, 3)])  # Assuming a range from -100 to 2

# Generate values for n
n_values = np.arange(-10, 11)

# Calculate z(n) for each n
z_values = [z(n) for n in n_values]

# Stem plot
plt.stem(n_values, z_values)
plt.xlabel('n')
plt.ylabel('z(n)')
plt.title('Stem Plot of z(n)')

# Highlight z(0) = 8
plt.plot(0, 8, 'ro')  # Red circle marker at (0, 8)

plt.grid(True)
plt.show()

