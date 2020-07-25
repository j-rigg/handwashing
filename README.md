# Open Handwashing

## What does it do?

Open Handwashing is a simple electronic control system to help people wash their hands better and prevent the spread of disease. It works by controlling the timing of soap and water delivery.

## Why is this useful?

Guidelines for proper handwashing are published by many public health organizations, such as [Health Canada](https://www.canada.ca/en/health-canada/services/healthy-living/your-health/diseases/benefits-hand-washing.html), the [WHO](https://www.who.int/gpsc/clean_hands_protection/en/), and the [CDC](https://www.cdc.gov/handwashing/when-how-handwashing.html). Unfortunately, it is always tempting to rush and not follow them properly.

This project aims to promote correct handwashing technique by prompting users at each step of the process and making sure that they do not rinse their hands too early. To my knowledge, this is the first open-source project involving handwashing, and the first device to shut off the water and prompt users to scrub different parts of their hands before rinsing.

## How does it work?

The system uses an Arduino to control a pump for dispensing soap, a valve for water flow, and 6 LED-lit panels showing different stages of handwashing (such as steps 2-7 in the [WHO directions](https://www.who.int/gpsc/media/how_to_handwash_lge.gif)).

Currently, the Arduino code, electrical schematic, and bill of materials are available (thanks to [onesimo93](https://github.com/onesimo93)). This project is open source, so please feel free to build, modify, and test!
