PHP_ARG_ENABLE(phpecm2cue, whether to enable Hello
World support,
[ --enable-phpecm2cue   Enable Hello World support])
if test "$PHP_PHPECM2CUE" = "yes"; then
  AC_DEFINE(HAVE_PHPECM2CUE, 1, [Whether you have Hello World])
  PHP_NEW_EXTENSION(phpecm2cue, phpecm2cue.c, $ext_shared)
fi