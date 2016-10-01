PHP_ARG_ENABLE(phpecm2cue, whether to enable phpecm2cue support,
[ --enable-phpecm2cue   Enable phpecm2cue support])
if test "$PHP_PHPECM2CUE" = "yes"; then
  AC_DEFINE(HAVE_PHPECM2CUE, 1, [Whether you have phpecm2cue])
  PHP_NEW_EXTENSION(phpecm2cue, phpecm2cue.c, $ext_shared)
fi