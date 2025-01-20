#ifndef SPARROWHAWK_NORMALIZER_C_WRAPPER_H_
#define SPARROWHAWK_NORMALIZER_C_WRAPPER_H_

#ifdef __cplusplus
extern "C" {
#endif

int Normalizer_Setup(const char *configuration_proto, const char *pathname_prefix);
char* Normalizer_Normalize(const char *input);

#ifdef __cplusplus
}
#endif

#endif  // SPARROWHAWK_NORMALIZER_C_WRAPPER_H_
