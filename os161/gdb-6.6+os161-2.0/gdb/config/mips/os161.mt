# Target: MIPS running OS/161
TDEPFILES= mips-tdep.o mips-os161-tdep.o corelow.o solib.o solib-svr4.o \
	nbsd-tdep.o

SIM_OBS = remote-sim.o
SIM = ../sim/mips/libsim.a
