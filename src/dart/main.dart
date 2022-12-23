import 'dart:io';

void main(List<String> args) {
  stdout.write('Hello ');
  for(String name in args){
    stdout.write(name);
  }
}