PHP_ARG_ENABLE(ecm2cue, whether to enable Hello
World support,
[ --enable-ecm2cue   Enable Hello World support])
if test "$PHP_ECM2CUE" = "yes"; then
  AC_DEFINE(HAVE_ECM2CUE, 1, [Whether you have Hello World])
  PHP_NEW_EXTENSION(ecm2cue, ecm2cue.c, $ext_shared)
fi