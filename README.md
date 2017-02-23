
# react-native-datami

## Getting started

`$ npm install react-native-datami --save`

### Mostly automatic installation

`$ react-native link react-native-datami`

### Manual installation


#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `react-native-datami` and add `RNDatami.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libRNDatami.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<

#### Android

1. Open up `android/app/src/main/java/[...]/MainActivity.java`
  - Add `import com.reactlibrary.RNDatamiPackage;` to the imports at the top of the file
  - Add `new RNDatamiPackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':react-native-datami'
  	project(':react-native-datami').projectDir = new File(rootProject.projectDir, 	'../node_modules/react-native-datami/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':react-native-datami')
  	```

## Usage
```javascript
import RNDatami from 'react-native-datami';

// TODO: What to do with the module?
RNDatami;
```
