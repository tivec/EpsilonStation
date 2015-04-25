.PHONY: clean All

All:
	@echo "----------Building project:[ EpsilonStation - Debug ]----------"
	@$(MAKE) -f  "EpsilonStation.mk"
clean:
	@echo "----------Cleaning project:[ EpsilonStation - Debug ]----------"
	@$(MAKE) -f  "EpsilonStation.mk" clean
