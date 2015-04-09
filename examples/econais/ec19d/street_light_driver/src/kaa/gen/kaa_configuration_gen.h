/*
 * Copyright 2014-2015 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

# ifndef KAA_CONFIGURATION_GEN_H_
# define KAA_CONFIGURATION_GEN_H_

# include "../kaa_common_schema.h"
# include "../collections/kaa_list.h"

# ifdef __cplusplus
extern "C" {
# endif



typedef enum {
    ENUM_ZONE_STATUS_ENABLE,
    ENUM_ZONE_STATUS_DISABLE,
} kaa_configuration_zone_status_t;

#ifdef GENC_ENUM_DEFINE_ALIASES
#define ENABLE ENUM_ZONE_STATUS_ENABLE
#define DISABLE ENUM_ZONE_STATUS_DISABLE
# endif // GENC_ENUM_DEFINE_ALIASES

#ifdef GENC_ENUM_STRING_LITERALS
const char* KAA_CONFIGURATION_ZONE_STATUS_SYMBOLS[2] = {
    "ENABLE",
    "DISABLE"};
# endif // GENC_ENUM_STRING_LITERALS


# ifndef KAA_CONFIGURATION_UNION_FIXED_OR_NULL_H_
# define KAA_CONFIGURATION_UNION_FIXED_OR_NULL_H_

# define KAA_CONFIGURATION_UNION_FIXED_OR_NULL_BRANCH_0    0
# define KAA_CONFIGURATION_UNION_FIXED_OR_NULL_BRANCH_1    1

kaa_union_t *kaa_configuration_union_fixed_or_null_branch_0_create();
kaa_union_t *kaa_configuration_union_fixed_or_null_branch_1_create();

kaa_union_t *kaa_configuration_union_fixed_or_null_deserialize(avro_reader_t reader);

# endif // KAA_CONFIGURATION_UNION_FIXED_OR_NULL_H_


typedef struct {
    int32_t zone_id;
    kaa_configuration_zone_status_t zone_status;
    kaa_union_t * __uuid;

    serialize_fn serialize;
    get_size_fn  get_size;
    destroy_fn   destroy;
} kaa_configuration_light_zone_t;

kaa_configuration_light_zone_t *kaa_configuration_light_zone_create();
kaa_configuration_light_zone_t *kaa_configuration_light_zone_deserialize(avro_reader_t reader);


typedef struct {
    kaa_list_t * light_zones;
    kaa_union_t * __uuid;

    serialize_fn serialize;
    get_size_fn  get_size;
    destroy_fn   destroy;
} kaa_configuration_street_lights_configuration_t;

kaa_configuration_street_lights_configuration_t *kaa_configuration_street_lights_configuration_create();
kaa_configuration_street_lights_configuration_t *kaa_configuration_street_lights_configuration_deserialize(avro_reader_t reader);

#ifdef __cplusplus
}      /* extern "C" */
#endif
#endif