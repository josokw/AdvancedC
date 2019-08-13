cache()

TEMPLATE = subdirs

SUBDIRS += \
    functions \
    functionsTestsUnity \
    functionsTestsCatch2  

# functions.subdir is implicitly set to "functions"
#functionsTestsUnity.subdir = functions
#functionsTestsCatch2.subdir = functions


# hierarchical relationship between components
functionsTestsUnity.depends = functions
functionsTestsCatch2.depends = functions
