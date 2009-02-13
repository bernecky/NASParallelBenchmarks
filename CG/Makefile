
all: cga cgb cgc cgd cgs cgw

cga: cg.sac
	sac2c -O3 -check tb -o cga cg.sac -DCLASSA

cgb: cg.sac
	sac2c -O3 -check tb -o oga cg.sac -DCLASSB

cgc: cg.sac
	sac2c -O3 -check tb -o cga cg.sac -DCLASSC

cgd: cg.sac
	sac2c -O3 -check tb -o cga cg.sac -DCLASSD

cgs: cg.sac
	sac2c -O3 -check tb -o cga cg.sac -DCLASSS

cgw: cg.sac
	sac2c -O3 -check tb -o cga cg.sac -DCLASSW

include $(SACBASE)/stdlib/Makefiles/Makefile_template.prg
