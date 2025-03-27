
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateComponentDescriptorCpp.js
 */

#include <react/renderer/components/rnscreens/ComponentDescriptors.h>
#include <react/renderer/core/ConcreteComponentDescriptor.h>
#include <react/renderer/componentregistry/ComponentDescriptorProviderRegistry.h>

namespace facebook::react {

void rnscreens_registerComponentDescriptorsFromCodegen(
  std::shared_ptr<const ComponentDescriptorProviderRegistry> registry) {
registry->add(concreteComponentDescriptorProvider<RNSScreenContainerComponentDescriptor>());
registry->add(concreteComponentDescriptorProvider<RNSScreenContentWrapperComponentDescriptor>());
registry->add(concreteComponentDescriptorProvider<RNSScreenFooterComponentDescriptor>());
registry->add(concreteComponentDescriptorProvider<RNSScreenNavigationContainerComponentDescriptor>());
registry->add(concreteComponentDescriptorProvider<RNSScreenStackComponentDescriptor>());
registry->add(concreteComponentDescriptorProvider<RNSSearchBarComponentDescriptor>());
}

} // namespace facebook::react
