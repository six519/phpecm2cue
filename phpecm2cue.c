#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
#include "php_phpecm2cue.h"

static function_entry phpecm2cue_functions[] = {
    PHP_FE(phpecm2cue_process, NULL)
    {NULL, NULL, NULL}
};

zend_module_entry phpecm2cue_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    PHP_PHPECM2CUE_PROCESS_EXTNAME,
    phpecm2cue_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
#if ZEND_MODULE_API_NO >= 20010901
    PHP_PHPECM2CUE_PROCESS_VERSION,
#endif
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_PHPECM2CUE
ZEND_GET_MODULE(phpecm2cue)
#endif

PHP_FUNCTION(phpecm2cue_process)
{
    RETURN_STRING("Hello World", 1);
}