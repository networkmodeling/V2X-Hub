/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "RegionalMovementState.h"

int
RegionalMovementState_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_Reg_MovementState.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using Reg_MovementState,
 * so here we adjust the DEF accordingly.
 */
static void
RegionalMovementState_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_Reg_MovementState.free_struct;
	td->print_struct   = asn_DEF_Reg_MovementState.print_struct;
	td->check_constraints = asn_DEF_Reg_MovementState.check_constraints;
	td->ber_decoder    = asn_DEF_Reg_MovementState.ber_decoder;
	td->der_encoder    = asn_DEF_Reg_MovementState.der_encoder;
	td->xer_decoder    = asn_DEF_Reg_MovementState.xer_decoder;
	td->xer_encoder    = asn_DEF_Reg_MovementState.xer_encoder;
	td->uper_decoder   = asn_DEF_Reg_MovementState.uper_decoder;
	td->uper_encoder   = asn_DEF_Reg_MovementState.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_Reg_MovementState.per_constraints;
	td->elements       = asn_DEF_Reg_MovementState.elements;
	td->elements_count = asn_DEF_Reg_MovementState.elements_count;
	td->specifics      = asn_DEF_Reg_MovementState.specifics;
}

void
RegionalMovementState_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	RegionalMovementState_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
RegionalMovementState_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	RegionalMovementState_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
RegionalMovementState_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	RegionalMovementState_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
RegionalMovementState_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	RegionalMovementState_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
RegionalMovementState_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	RegionalMovementState_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
RegionalMovementState_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	RegionalMovementState_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
RegionalMovementState_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	RegionalMovementState_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
RegionalMovementState_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	RegionalMovementState_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static ber_tlv_tag_t asn_DEF_RegionalMovementState_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RegionalMovementState = {
	"RegionalMovementState",
	"RegionalMovementState",
	RegionalMovementState_free,
	RegionalMovementState_print,
	RegionalMovementState_constraint,
	RegionalMovementState_decode_ber,
	RegionalMovementState_encode_der,
	RegionalMovementState_decode_xer,
	RegionalMovementState_encode_xer,
	RegionalMovementState_decode_uper,
	RegionalMovementState_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RegionalMovementState_tags_1,
	sizeof(asn_DEF_RegionalMovementState_tags_1)
		/sizeof(asn_DEF_RegionalMovementState_tags_1[0]), /* 1 */
	asn_DEF_RegionalMovementState_tags_1,	/* Same as above */
	sizeof(asn_DEF_RegionalMovementState_tags_1)
		/sizeof(asn_DEF_RegionalMovementState_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

