TARGET = pomodoro

$(TARGET): pomodoro.c
	gcc -o $(TARGET) pomodoro.c

.PHONY: install uninstall clean

install: $(TARGET)
	sudo cp $(TARGET) /usr/local/bin
	sudo chmod +x /usr/local/bin/$(TARGET)

uninstall:
	sudo rm -f /usr/local/bin/$(TARGET)

clean:
	rm -f $(TARGET)