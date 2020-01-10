/* ISA-1
 *
 * Copyright (c) 2019, John Musgrave <musgrajw at uc dot mail dot edu>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   * Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the name of this project nor the names of its contributors may be used
 *     to endorse or promote products derived from this software without
 *     specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdio.h>


void next() {
	// advance token
}


int arithmetic_operation() {
	return false;
}


int expression() {
	return false;
}


int assignment_statement() {
	if (variable) {
		next();

		if (expression() == true) {
			return true;
		}
	}

	return false;
}


int if_statement() {
	if (if) {
		next();
		if (expression() == true) {
			next();
			if (then) {
				next();
				if (statement() == true) {
					next();
					if (semi-colon) {
						next();

						// potential else

						if (end if) {
							next();
							return true;
						}
					}
				}
			}
		}
	} 

	return false;
}


int loop_statement() {
    if (for()) {
    	next();
    	if (assignment_statement() == true) {
    		next();
    		if (semi-colon) {
    			next();
    			if (expression() == true) {
    				next();
    				if (statement() == true) {
    					next();
    					if (end-for) {
    						next();
    						return true;
    					}
    				}
    			}
    		}
    	}
    }

	return false;
}


int return_statement() {
	if (return_s) {
		if (statement() == true) {
			return true;
		}
	}
	
	return false;
}


int statement() {
	if (assignment_statement() == true) {
		return true;
	} else if (if_statement() == true) {
		return true;
	} else if (loop_statement() == true) {
		return true;
	} else if (return_statement() == true) {
		return true;
	}

	return false;
}


int program() {
	next()
	
	while (statement() == true) {
		next();
	}

	return false;
}


int declaration() {
	return false;
}


int variable_declaration() {
	return false;
}


int identifier() {

}


int number() {
	return false;
}


int name() {
	if (identifier() == true) {
		return true;
	} else if (expression() == true) {
		return true;
	}

	return false;
}


int factor() {
	if (expression() == true) {
		return true;
	} else if (name() == true) {
		return true;
	} else if (number() == true) {
		return true;
	}

	// check for true or false

	return false;
}


int program() {

}


int main() {
	return program();
}
