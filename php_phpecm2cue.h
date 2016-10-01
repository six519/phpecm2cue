#ifndef PHP_PHPECM2CUE_H
#define PHP_PHPECM2CUE_H 1
#define PHP_PHPECM2CUE_PROCESS_VERSION "1.0"
#define PHP_PHPECM2CUE_PROCESS_EXTNAME "phpecm2cue"

PHP_FUNCTION(phpecm2cue_process);

extern zend_module_entry phpecm2cue_module_entry;
#define phpext_phpecm2cue_ptr &phpecm2cue_module_entry
#endif