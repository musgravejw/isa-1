target:
	@mkdir -p dist
	@gcc -w src/parser.c -o dist/parser

#test:


clean:
	@rm dist/*
