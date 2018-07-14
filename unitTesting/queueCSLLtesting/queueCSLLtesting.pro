cache()

TEMPLATE = subdirs

SUBDIRS += \
    queueCSLL \
    queueCSLLtests

# queueCSLL.subdir is implicitly set to "queueCSLL"
queueCSLLtests.subdir = queueCSLLtests

# hierarchical relationship between components
queueCSLLtests.depends = queueCSLL
