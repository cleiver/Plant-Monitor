# Plant Monitor

I have a history of letting the plants die. Not because I want to, but because I forget to water them.

![Version One](http://assets.cleiver.com/externals/github/plant-monitor/picture-1.jpg)

## Components
- Arduino Uno
- Soil humidity sensor
- Buzzer

## How to build
![Schematic](http://assets.cleiver.com/externals/github/plant-monitor/fritzing-schematic.jpg)

I actually didn't use the jumpers, just connected the components directly into the Arduino board, as you can (try to) see in the photo.

## Roadmap
- Include a display
- Include a temperature sensor
- Include a PH sensor
- Internet connection to configure some parameters*

*Some plants have more water needs than others, so I could create an app to change the parameters accordingly to the plant

### Long term roadmap
I don't think it's worth to let it running all day long, the land does not dry that fast. But I would like it to reach this point.
- Auto irrigation
  - Maybe integrated with an aquarium (another project)
- Internet connection
  - To receive a message when it' dry
  - To check on sensors
  - To activate the irrigation system
