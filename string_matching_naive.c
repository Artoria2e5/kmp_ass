#include "string_matching.h"

int string_matching_naive(const char *text, int N, const char* pattern, int M) {
	// ASSUME text[N] == '\0'    (1)
	// ASSUME pattern[M] == '\0' (2)
	int nmatch = 0;
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			// by (1), an end of text will always cause a mismatch and abort,
			// thus preventing out-of-bound access
			if (text[i+j] != pattern[j])
				break;
		}
		nmatch++;
	}
	return nmatch;
}