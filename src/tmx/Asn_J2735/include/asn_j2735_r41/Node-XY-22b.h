/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_Node_XY_22b_H_
#define	_Node_XY_22b_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Offset-B11.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Node-XY-22b */
typedef struct Node_XY_22b {
	Offset_B11_t	 x;
	Offset_B11_t	 y;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Node_XY_22b_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Node_XY_22b;

#ifdef __cplusplus
}
#endif

#endif	/* _Node_XY_22b_H_ */
#include "asn_internal.h"
