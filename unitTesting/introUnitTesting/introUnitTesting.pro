cache()

TEMPLATE = subdirs

SUBDIRS += \
    functions \
    functionsTests

# functions.subdir is implicitly set to "functions"
functionsTests.subdir = functionsTests

# hierarchical relationship between components
functionsTests.depends = functions
