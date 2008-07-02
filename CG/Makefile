
all: cga cgb cgc cgd cgs cgw

cga: cg.sac
	sac2c -O3 -check tb cga cga.sac -DCLASSA

cgb: cg.sac
	sac2c -O3 -check tb cga cgb.sac -DCLASSB

cgc: cg.sac
	sac2c -O3 -check tb cga cgc.sac -DCLASSC

cgd: cg.sac
	sac2c -O3 -check tb cga cgd.sac -DCLASSD

cgs: cg.sac
	sac2c -O3 -check tb cga cgs.sac -DCLASSS

cgw: cg.sac
	sac2c -O3 -check tb cga cgw.sac -DCLASSW

include $(SACBASE)/stdlib/Makefiles/Makefile_template.prg
