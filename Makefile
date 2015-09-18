####
#### Sample Makefile for building applications with the RIOT OS
####
#### The example file system layout is:
#### ./application Makefile
#### ../../RIOT
####

# Set the name of your application:
APPLICATION = kubos-core

# If no BOARD is found in the environment, use this default:
BOARD ?= native

# This has to be the absolute path to the RIOT base directory:
RIOTBASE ?= $(CURDIR)/../RIOT
RIOTBASE := $(abspath $(RIOTBASE))

# Uncomment this to enable scheduler statistics for ps:
#CFLAGS += -DSCHEDSTATISTICS

# If you want to use native with valgrind, you should recompile native
# with the target all-valgrind instead of all:
# make -B clean all-valgrind

# Uncomment this to enable code in RIOT that does safety checking
# which is not needed in a production environment but helps in the
# development process:
#CFLAGS += -DDEVELHELP

#LINKFLAGS += -lgps

# Change this to 0 show compiler invocation lines by default:
QUIET ?= 1

# Modules to include:
USEMODULE += shell
USEMODULE += vtimer
USEMODULE += xtimer
#USEMODULE += uart0
#USEMODULE += posix
#USEMODULE += newlib

#export INCLUDES += -Iapplication_include

# **VANGUARD LOCATION MODULE**
# comment this section out if not using
EXTERNAL_MODULE_DIRS += $(CURDIR)/modules/location

USEMODULE += location
INCLUDES += -I$(CURDIR)/modules/location

LINKFLAGS += -lgps
# **END LOCATION MODULE***

# Specify custom dependencies for your application here ...
# APPDEPS = app_data.h config.h

include $(RIOTBASE)/Makefile.include

# ... and define them here (after including Makefile.include,
# otherwise you modify the standard target):
#proj_data.h: script.py data.tar.gz
#	./script.py
#LINKFLAGS += -lgps