
all: 
	@echo "nothing to make as this is only a template project"
	@echo "use 'make docs' to make the documentation"

FORCE:

docs: FORCE
	@( cat docs/Doxyfile ; bash docs/find-img-path.sh ) | doxygen -