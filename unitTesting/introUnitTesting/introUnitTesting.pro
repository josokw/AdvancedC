cache()

TEMPLATE = subdirs

SUBDIRS += \
    functions \
    functionsTestsUnity \
    functionsTestsCatch2  

# hierarchical relationship between components
functionsTestsUnity.depends = functions
functionsTestsCatch2.depends = functions
