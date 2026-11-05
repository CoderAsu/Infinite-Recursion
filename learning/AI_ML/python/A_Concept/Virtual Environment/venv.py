# What is a virtual environment in Python, and why is it used?
# A virtual environment is a isolated Python environment that allows you to manage dependencies for different projects independently. It's used to avoid conflicts between project dependencies.


"""
    Think of a virtual enviroment as a separate container for each Python project. Each container:

    -> Has its own Python interpreter
    -> Has its own set of installed packages
    -> Is isolated from other virtual environments
    -> Can have different versions of the same package






    Using virtual enviroment is important because:

    -> It prevents package version conflicts between projects
    -> Makes projects more portable and reproducible
    -> Keeps your system Python installation clean
    -> Allows testing with different Python versions
"""








"""
To create a virtual environment on your computer, open the command prompt, and navigate to the folder you want to create your project, then type this command.
"""
# python -m venv myfirstproject



"""
To use the virtual environment, you have to activate it with this command.
"""
#  folder_name\Scripts\activate



"""
To see the package and their versions, you need to write the command given below to list the packages inside requirement.txt
"""
# pip list > requirement.txt



"""
To deactivate it from virtual environment
"""
# deactive
