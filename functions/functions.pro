cache()

TEMPLATE = subdirs

SUBDIRS += \
    app \
    testUnity \
    testCatch2  

# hierarchical relationship between components
testUnity.depends = app
testCatch2.depends = app
