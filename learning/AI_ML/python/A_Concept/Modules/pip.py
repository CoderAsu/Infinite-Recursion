# PIP is a package manager for Python packages, or modules if you like.
# Note: If you have python version 3.4 or later, PIP is included by default.

# What is a Package?
# A package contains all the files you need for a module.
# Modules are python code libraries you can include in your project.

# Check if PIP is Installed
# pip --version

# Install PIP
# If you do not have PIP installed, you can download and install it from this page:
# https://pypi.org/project/pip/

# Download a Package
# Open the command line interface and tell PIP to download the package you want.
# Navigate your command line to the location of Python's script directory, and type the following:
# pip install numpy
# Now you have downloaded and installed your first package!


# Using a Package
# Once the package is installed, it is ready to use.
# Import the "numpy" package into your project.
import numpy as np
x = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
print(x)


# Find Packages
# https://pypi.org/

# Remove a Package
# Use the uninstall command to remove a package:
# pip uninstall numpy

# List Packages
# Use the list command to list all the packages installed on your system:
# pip list