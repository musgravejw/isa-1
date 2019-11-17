
int program();

void main() {
	return program();
}


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
    if (for) {
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


