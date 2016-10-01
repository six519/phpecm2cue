
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
#include "php_ecm2cue.h"

static function_entry ecm2cue_functions[] = {
    PHP_FE(ecm2cue, NULL)
    {NULL, NULL, NULL}
};

zend_module_entry ecm2cue_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    PHP_ECM2CUE_EXTNAME,
    ecm2cue_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
#if ZEND_MODULE_API_NO >= 20010901
    PHP_ECM2CUE_VERSION,
#endif
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_HELLO
ZEND_GET_MODULE(ecm2cue)
#endif

PHP_FUNCTION(ecm2cue)
{
    RETURN_STRING("Hello World", 1);
}