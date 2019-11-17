
void main() {
	
}


int arithmetic_operation() {
	return false;
}


int expression() {
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


