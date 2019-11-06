# Lecture 3

## How to speak IoT?
last lecture I havent pick any of the formats listed, only MQTT and CoAP.

I got to Research Text:

## Plain Text
A plain text message uses only US-ASCII text as described in RFC 2822.
Advantage: Is universally understood
Disadvantage: The message can't contain different fonts or other text formatting.

## HTML (Hyper Text Markup Language)
Advantage: An HTML message supports text formatting, background images, tables, bullet points, and other graphical elements
Disadvantage: As popular it is, HTML has a few significant drawbacks, such as its static nature, its inability to render content in an aesthetically pleasing way, its well-known compatibility issues and its overall complexity.

### Example

<html>
<body>
<b>Hello World</b>
</body>
</html>

## Rich Text Format (RTF)
Advantage: RTF supports text formatting and other graphical elements.
Disadvantage: Only Outlook, Outlook on the web, and a few other MAPI email clients understand RTF messages.

### Example

{\rtf1\ansi\deff0
{\colortbl;\red0\green0\blue0;\red255\green0\blue0;}
This line is the default color\line
\cf2
This line is red\line
\cf1
This line is the default color
}

## YAML

YAML is a human-readable data serialization standard that can be used in conjunction with all programming languages and is often used to write configuration files.

#### How does YAML work?

- Scalars, or variables, are defined using a colon and a space.
  - integer: 25 string: "25" float: 25.0 boolean: Yes
- Associative arrays and lists can be defined using a conventional block format or an inline format that is similar to JSON.
  - --- # Shopping List in Block Format - milk - eggs - juice --- # Shopping List in Inline Format [milk, eggs, juice]
- Strings can be denoted with a | character, which preserves newlines, or a > character, which folds newlines
  - data: | Each of these Newlines Will be broken up data: > This text is wrapped and will be formed into a single paragraph
  
#### Why is YAML better than JSON:

YAML 1.2 is a superset of JavaScript Object Notation (JSON) but has some built-in advantages. For example, YAML can self-reference, support complex datatypes, embed block literals, support comments, and more. Overall, YAML tends to be more readable than JSON as well. 

#### Conclusion:
Conclusion:
YAML is a data-oriented language that has features derived from Perl, C, HTML, and other languages.
YAML is a superset of JSON that comes with multiple built-in advantages such as including comments, self-referencing, and support for complex datatypes.
Multiple software packages have implemented YAML to create powerful configuration management tools such as Red Hat’s Ansible.

In a group we decided collectivly:

Best:
- Binary, JSON
Worst:
- YAML, Text

### CoAP:

CoAP is a software protocol that allows simple electronic devices to communicate over the Internet. It is designed for small devices with low-power sensors and actuators that need to be controlled or supervised remotely, through standard Internet networks.
#### Examples:

The IoT realm is widely using CoAP as a protocol for home automation and in numerous industrial applications. It's also used for managing devices using The Open Mobile Alliance's (OMA) Lightweight Machine-to-Machine (LWM2M) protocol

#### Purpose: Compatibility with existing protocols and software support:
One of the main benefits provided by the Constrained Application Protocol is that the protocol is designed to seamlessly map to existing web protocols such as HTTP.It also provides simple resources discovery, security, and maintains key concepts used on the web such as uniform resource identifiers, methods and media types, it very simple and based on RESTful.
A CoAP-related challenge Octoblu ran into with its IoT stack, which is currently running in Amazon Web Services, is that AWS' Elastic Load Balancing service works great for supporting IPv6 for TCP traffic -- but not UDP. To extend IPv6 support to CoAP, they deployed a UDP-based IPv6 service outside of AWS,While supporting CoAP had some initial challenges ... it's a very modern IoT protocol with many new benefits.

### MQTT:
MQTT is a lightweight publish/subscribe messaging protocol designed for M2M (machine to machine) telemetry in low bandwidth environments.

It was designed by Andy Stanford-Clark (IBM) and Arlen Nipper in 1999 for connecting Oil Pipeline telemetry systems over satellite.

Although it started as a proprietary protocol it was released Royalty free in 2010 and became an OASIS standard in 2014.

MQTT stands for MQ Telemetry Transport but previously was known as Message Queuing Telemetry Transport.

MQTT is fast becoming one of the main protocols for IOT (internet of things) deployments. 