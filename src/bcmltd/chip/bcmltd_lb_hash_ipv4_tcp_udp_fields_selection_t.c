/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from INTERNAL/fltg/xgs/lb_hash/LB_HASH_IPV4_TCP_UDP_FIELDS_SELECTION.tbl.ltl
 * Edits to this file will be lost when it is regenerated.
 *
 * Copyright: (c) 2018 Broadcom. All Rights Reserved. "Broadcom" refers to 
 * Broadcom Limited and/or its subsidiaries.
 * 
 * Broadcom Switch Software License
 * 
 * This license governs the use of the accompanying Broadcom software. Your 
 * use of the software indicates your acceptance of the terms and conditions 
 * of this license. If you do not agree to the terms and conditions of this 
 * license, do not use the software.
 * 1. Definitions
 *    "Licensor" means any person or entity that distributes its Work.
 *    "Software" means the original work of authorship made available under 
 *    this license.
 *    "Work" means the Software and any additions to or derivative works of 
 *    the Software that are made available under this license.
 *    The terms "reproduce," "reproduction," "derivative works," and 
 *    "distribution" have the meaning as provided under U.S. copyright law.
 *    Works, including the Software, are "made available" under this license 
 *    by including in or with the Work either (a) a copyright notice 
 *    referencing the applicability of this license to the Work, or (b) a copy 
 *    of this license.
 * 2. Grant of Copyright License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    copyright license to reproduce, prepare derivative works of, publicly 
 *    display, publicly perform, sublicense and distribute its Work and any 
 *    resulting derivative works in any form.
 * 3. Grant of Patent License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    patent license to make, have made, use, offer to sell, sell, import, and 
 *    otherwise transfer its Work, in whole or in part. This patent license 
 *    applies only to the patent claims licensable by Licensor that would be 
 *    infringed by Licensor's Work (or portion thereof) individually and 
 *    excluding any combinations with any other materials or technology.
 *    If you institute patent litigation against any Licensor (including a 
 *    cross-claim or counterclaim in a lawsuit) to enforce any patents that 
 *    you allege are infringed by any Work, then your patent license from such 
 *    Licensor to the Work shall terminate as of the date such litigation is 
 *    filed.
 * 4. Redistribution
 *    You may reproduce or distribute the Work only if (a) you do so under 
 *    this License, (b) you include a complete copy of this License with your 
 *    distribution, and (c) you retain without modification any copyright, 
 *    patent, trademark, or attribution notices that are present in the Work.
 * 5. Derivative Works
 *    You may specify that additional or different terms apply to the use, 
 *    reproduction, and distribution of your derivative works of the Work 
 *    ("Your Terms") only if (a) Your Terms provide that the limitations of 
 *    Section 7 apply to your derivative works, and (b) you identify the 
 *    specific derivative works that are subject to Your Terms. 
 *    Notwithstanding Your Terms, this license (including the redistribution 
 *    requirements in Section 4) will continue to apply to the Work itself.
 * 6. Trademarks
 *    This license does not grant any rights to use any Licensor's or its 
 *    affiliates' names, logos, or trademarks, except as necessary to 
 *    reproduce the notices described in this license.
 * 7. Limitations
 *    Platform. The Work and any derivative works thereof may only be used, or 
 *    intended for use, with a Broadcom switch integrated circuit.
 *    No Reverse Engineering. You will not use the Work to disassemble, 
 *    reverse engineer, decompile, or attempt to ascertain the underlying 
 *    technology of a Broadcom switch integrated circuit.
 * 8. Termination
 *    If you violate any term of this license, then your rights under this 
 *    license (including the license grants of Sections 2 and 3) will 
 *    terminate immediately.
 * 9. Disclaimer of Warranty
 *    THE WORK IS PROVIDED "AS IS" WITHOUT WARRANTIES OR CONDITIONS OF ANY 
 *    KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WARRANTIES OR CONDITIONS OF 
 *    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE OR 
 *    NON-INFRINGEMENT. YOU BEAR THE RISK OF UNDERTAKING ANY ACTIVITIES UNDER 
 *    THIS LICENSE. SOME STATES' CONSUMER LAWS DO NOT ALLOW EXCLUSION OF AN 
 *    IMPLIED WARRANTY, SO THIS DISCLAIMER MAY NOT APPLY TO YOU.
 * 10. Limitation of Liability
 *    EXCEPT AS PROHIBITED BY APPLICABLE LAW, IN NO EVENT AND UNDER NO LEGAL 
 *    THEORY, WHETHER IN TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE 
 *    SHALL ANY LICENSOR BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY DIRECT, 
 *    INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF 
 *    OR RELATED TO THIS LICENSE, THE USE OR INABILITY TO USE THE WORK 
 *    (INCLUDING BUT NOT LIMITED TO LOSS OF GOODWILL, BUSINESS INTERRUPTION, 
 *    LOST PROFITS OR DATA, COMPUTER FAILURE OR MALFUNCTION, OR ANY OTHER 
 *    COMMERCIAL DAMAGES OR LOSSES), EVEN IF THE LICENSOR HAS BEEN ADVISED OF 
 *    THE POSSIBILITY OF SUCH DAMAGES.
 */
#include <bcmltd/bcmltd_internal.h>
#include "bcmltd_strpool.h"
static const bcmltd_field_rep_t bcmltd_lb_hash_ipv4_tcp_udp_fields_selection_t_fields[] = {
    {
        .name  = bcmltd_strpool_hash0_dst_modid,  /* HASH0_DST_MODID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash0_vntag_src_vif,  /* HASH0_VNTAG_SRC_VIF */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash0_dst_port,  /* HASH0_DST_PORT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash0_vntag_dst_vif,  /* HASH0_VNTAG_DST_VIF */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash0_src_modid,  /* HASH0_SRC_MODID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash0_src_port,  /* HASH0_SRC_PORT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash0_protocol,  /* HASH0_PROTOCOL */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash0_l4_dst,  /* HASH0_L4_DST */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash0_l4_src,  /* HASH0_L4_SRC */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash0_vid,  /* HASH0_VID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash0_dip_lo,  /* HASH0_DIP_LO */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash0_dip_hi,  /* HASH0_DIP_HI */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash0_sip_lo,  /* HASH0_SIP_LO */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash0_sip_hi,  /* HASH0_SIP_HI */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash0_cntag_rpid,  /* HASH0_CNTAG_RPID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Hash 0\n TCP or UDP payloads.\n",
    },
    {
        .name  = bcmltd_strpool_hash1_dst_modid,  /* HASH1_DST_MODID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash1_vntag_src_vif,  /* HASH1_VNTAG_SRC_VIF */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash1_dst_port,  /* HASH1_DST_PORT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash1_vntag_dst_vif,  /* HASH1_VNTAG_DST_VIF */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash1_src_modid,  /* HASH1_SRC_MODID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash1_src_port,  /* HASH1_SRC_PORT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash1_protocol,  /* HASH1_PROTOCOL */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash1_l4_dst,  /* HASH1_L4_DST */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash1_l4_src,  /* HASH1_L4_SRC */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash1_vid,  /* HASH1_VID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash1_dip_lo,  /* HASH1_DIP_LO */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash1_dip_hi,  /* HASH1_DIP_HI */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash1_sip_lo,  /* HASH1_SIP_LO */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash1_sip_hi,  /* HASH1_SIP_HI */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash1_cntag_rpid,  /* HASH1_CNTAG_RPID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
};
const bcmltd_table_rep_t bcmltd_lb_hash_ipv4_tcp_udp_fields_selection_t = {
    .name = bcmltd_strpool_lb_hash_ipv4_tcp_udp_fields_selection, /* LB_HASH_IPV4_TCP_UDP_FIELDS_SELECTION */
    .flags = 0,
    .fields = 30,
    .field = bcmltd_lb_hash_ipv4_tcp_udp_fields_selection_t_fields,
    .desc = "IPv4 TCP and UDP based hash field selection.",
};
