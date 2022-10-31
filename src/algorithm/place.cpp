///////////////////////////////////////////////////////////////////////////////
// Creator: Minjae Kim of CSDL, POSTECH
// Email:   kmj0824@postech.ac.kr
//
// BSD 3-Clause License
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
///////////////////////////////////////////////////////////////////////////////

#include "Circuit.h"
#include <random>
namespace Placer {
void Circuit::place() {
  // Write **your own** code.
  // !!! Cheating will be strictly not accepted. !!!
  // If cheating is detected by the similarity check program and TA determine that you have cheated,
  // then you will get F grade or zero point for this term project.
  // You can use external libraries for only pure math libraries; i.e) fft, sparse matrix, etc
  // If you want to use external library, then please check whether it is okay by contact to TA.


  // random place
  // this is simple place example
  //    mt19937 genX(1111);  // fix seed
  //    mt19937 genY(2222);  // fix seed
  mt19937 genX(random_device{}());
  mt19937 genY(random_device{}());
  uniform_int_distribution<int> disX(0, (int) die_->getWidth());
  uniform_int_distribution<int> disY(0, (int) die_->getHeight());

  for (Instance *instance : instance_pointers_) {
    instance->setCoordinate(disX(genX), disY(genY));
  }

  cout << "RandomPlace Done." << endl;

}
}
