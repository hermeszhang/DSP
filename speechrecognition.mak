# Generated by the VisualDSP++ IDDE

# Note:  Any changes made to this Makefile will be lost the next time the
# matching project file is loaded into the IDDE.  If you wish to preserve
# changes, rename this file and run it externally to the IDDE.

# The syntax of this Makefile is such that GNU Make v3.77 or higher is
# required.

# The current working directory should be the directory in which this
# Makefile resides.

# Supported targets:
#     speechrecognition_Debug
#     speechrecognition_Debug_clean

# Define this variable if you wish to run this Makefile on a host
# other than the host that created it and VisualDSP++ may be installed
# in a different directory.

ADI_DSP=C:\Program Files (x86)\Analog Devices\VisualDSP 5.0


# $VDSP is a gmake-friendly version of ADI_DIR

empty:=
space:= $(empty) $(empty)
VDSP_INTERMEDIATE=$(subst \,/,$(ADI_DSP))
VDSP=$(subst $(space),\$(space),$(VDSP_INTERMEDIATE))

RM=cmd /C del /F /Q

#
# Begin "speechrecognition_Debug" configuration
#

ifeq ($(MAKECMDGOALS),speechrecognition_Debug)

speechrecognition_Debug : ./Debug/speechrecognition.dxe 

Debug/framework.doj :framework.c $(VDSP)/212xx/include/processor_include.h $(VDSP)/212xx/include/21262.h $(VDSP)/212xx/include/platform_include.h $(VDSP)/212xx/include/Cdef21262.h $(VDSP)/212xx/include/Cdef21266.h $(VDSP)/212xx/include/def21262.h $(VDSP)/212xx/include/def21266.h $(VDSP)/212xx/include/builtins.h $(VDSP)/212xx/include/sys/builtins_support.h $(VDSP)/212xx/include/sysreg.h $(VDSP)/212xx/include/signal.h $(VDSP)/212xx/include/sru.h $(VDSP)/212xx/include/sru21262.h $(VDSP)/212xx/include/sru21266.h framework.h $(VDSP)/212xx/include/def21262.h $(VDSP)/212xx/include/def21266.h $(VDSP)/212xx/include/platform_include.h 
	@echo ".\framework.c"
	$(VDSP)/cc21k.exe -c .\framework.c -file-attr ProjectName=speechrecognition -g -structs-do-not-overlap -no-multiline -double-size-32 -warn-protos -proc ADSP-21262 -o .\Debug\framework.doj -MM

Debug/Levinson.doj :Levinson.c $(VDSP)/212xx/include/stats.h constants.h 
	@echo ".\Levinson.c"
	$(VDSP)/cc21k.exe -c .\Levinson.c -file-attr ProjectName=speechrecognition -g -structs-do-not-overlap -no-multiline -double-size-32 -warn-protos -proc ADSP-21262 -o .\Debug\Levinson.doj -MM

Debug/speechrecognition.doj :speechrecognition.c $(VDSP)/212xx/include/stdio.h $(VDSP)/212xx/include/stdio_21xxx.h Levinson.h constants.h $(VDSP)/212xx/include/stats.h 
	@echo ".\speechrecognition.c"
	$(VDSP)/cc21k.exe -c .\speechrecognition.c -file-attr ProjectName=speechrecognition -g -structs-do-not-overlap -no-multiline -double-size-32 -warn-protos -proc ADSP-21262 -o .\Debug\speechrecognition.doj -MM

./Debug/speechrecognition.dxe :$(VDSP)/212xx/ldf/ADSP-21262.LDF $(VDSP)/212xx/lib/2126x_rev_0.0/262_hdr.doj ./Debug/framework.doj ./Debug/Levinson.doj ./Debug/speechrecognition.doj $(VDSP)/212xx/lib/2126x_rev_0.0/libc26x.dlb $(VDSP)/212xx/lib/2126x_rev_0.0/libio.dlb $(VDSP)/212xx/lib/2126x_rev_0.0/libdsp26x.dlb $(VDSP)/212xx/lib/2126x_rev_0.0/libcpp.dlb 
	@echo "Linking..."
	$(VDSP)/cc21k.exe .\Debug\framework.doj .\Debug\Levinson.doj .\Debug\speechrecognition.doj -L .\Debug -add-debug-libpaths -flags-link -od,.\Debug -o .\Debug\speechrecognition.dxe -proc ADSP-21262 -MM

endif

ifeq ($(MAKECMDGOALS),speechrecognition_Debug_clean)

speechrecognition_Debug_clean:
	-$(RM) "Debug\framework.doj"
	-$(RM) "Debug\Levinson.doj"
	-$(RM) "Debug\speechrecognition.doj"
	-$(RM) ".\Debug\speechrecognition.dxe"
	-$(RM) ".\Debug\*.ipa"
	-$(RM) ".\Debug\*.opa"
	-$(RM) ".\Debug\*.ti"
	-$(RM) ".\Debug\*.pgi"
	-$(RM) ".\*.rbld"

endif

