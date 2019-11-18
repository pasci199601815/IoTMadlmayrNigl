# How to speak IoT
## Binary
BINEX, for "BINary EXchange", is an operational binary format standard for research and operational purposes. The format has been designed to grow and allow encapsulation of any data or metadata allowed in the common ASCII exchange formats.
+ more efficient in storing
+ more speed of access
-	Not human readable
-	No comments
The two designs for the regular CRC generalized record structure are:
````
      1 byte:     synchronization byte, also containing
                  little/big endian bit for record
      1-4 bytes:  record ID
      1-4 bytes:  record message length in bytes
     [1-4 bytes]: bit-flipped 1-4 bytes of record message length (enhanced CRC only!)
      n bytes:    record message
      1-16 bytes: checksum or CRC (of ID, length, and message bytes)
and
      1 byte:     leading synchronization byte, also containing
                  little/big endian bit for record message
      1-4 bytes:  record ID
      1-4 bytes:  record message length in bytes
     [1-4 bytes]: bit-flipped 1-4 bytes of record message length (enhanced CRC only!)
      n bytes:    record message
      1-16 bytes: checksum or CRC (of ID, length, and message bytes)
      1-4 bytes:  total number of bytes in:
                    • leading synchronization byte
                    • record ID
                    • record message length
                    • record message
                    • checksum or CRC
                  with bytes in reverse order
      1 byte:     terminating synchronization byte, also containing
                  little/big endian bit for record message
````
## JSON
JavaScript Object Notation
JSON is an exchange format that uses human readable-text to transmit data objects consisting of attribute–value pairs and array data types (or any other serializable value). It is a very common data format, with a diverse range of applications, such as serving as replacement for XML in AJAX systems.
+ easy to use
+ widely used
https://swapi.co/
-	No error handling
-	Can be hacked 
````
{
  "firstName": "John",
  "lastName": "Smith",
  "isAlive": true,
  "age": 27,
  "address": {
    "streetAddress": "21 2nd Street",
    "city": "New York",
    "state": "NY",
    "postalCode": "10021-3100"
  },
  "phoneNumbers": [
    {
      "type": "home",
      "number": "212 555-1234"
    },
    {
      "type": "office",
      "number": "646 555-4567"
    },
    {
      "type": "mobile",
      "number": "123 456-7890"
    }
  ],
  "children": [],
  "spouse": null
}
````
## BLE
Bluetooth Low Energy is intended to provide considerably reduced power consumption and cost while maintaining a similar communication range. Mobile operating systems including iOS, Android as well as macOS, Linux, Windows 8 and Windows 10, natively support Bluetooth Low Energy.
## Example
+ Nike Fuelband
+ Most of the industry uses BLE instead of normal Bluetooth, its just better
