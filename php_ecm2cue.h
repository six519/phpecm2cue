#ifndef PHP_ECM2CUE_H
#define PHP_ECM2CUE_H 1
#define PHP_ECM2CUE_VERSION "1.0"
#define PHP_ECM2CUE_EXTNAME "ecm2cue"

PHP_FUNCTION(ecm2cue);

extern zend_module_entry ecm2cue_module_entry;
#define phpext_ecm2cue_ptr &ecm2cue_module_entry

#endif