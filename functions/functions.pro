cache()

TEMPLATE = subdirs

SUBDIRS += \
    src \
    testUnity \
    testCatch2  

# hierarchical relationship between components
testUnity.depends = src
testCatch2.depends = src
