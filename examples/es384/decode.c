/*
   Copyright 2020 Raphael Beck

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#include <stdio.h>
#include <string.h>
#include "l8w8jwt/encode.h"

/*
 * This keypair was generated using the following command:
 * openssl ecparam -name secp384r1 -genkey -noout -out private.pem && openssl ec -in private.pem -pubout -out public.pem
 */

static const char ECDSA_PRIVATE_KEY[] = "-----BEGIN EC PRIVATE KEY-----\n"
                                        "MIGkAgEBBDCmT7i4o8x5NZDT2nk1D4TUxKDknyx9xGL3F0eRATDndq6MNVmkdAwl\n"
                                        "+8BaWL6xAS6gBwYFK4EEACKhZANiAASmzsk7PEHrovqP3HvWz3lRKpWM0lv//O2A\n"
                                        "wz20beljIJkKCRQiM9K4rlCcdipGwrIj/tlkBWXwbfwuLvZfkJ0SNYtUuC8H/7eu\n"
                                        "UuHfD70y0lfVQ5Ubze5luZ56j+FK+VI=\n"
                                        "-----END EC PRIVATE KEY-----";

static const char ECDSA_PUBLIC_KEY[] = "-----BEGIN PUBLIC KEY-----\n"
                                       "MHYwEAYHKoZIzj0CAQYFK4EEACIDYgAEps7JOzxB66L6j9x71s95USqVjNJb//zt\n"
                                       "gMM9tG3pYyCZCgkUIjPSuK5QnHYqRsKyI/7ZZAVl8G38Li72X5CdEjWLVLgvB/+3\n"
                                       "rlLh3w+9MtJX1UOVG83uZbmeeo/hSvlS\n"
                                       "-----END PUBLIC KEY-----";

int main(void)
{
    return 0;
}