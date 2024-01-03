/**
 * @file hyperv-tlfs.h
 *
 * @brief Definitions from the Microsoft Hypervisor Top Level Functional Specification.
 *
 * @see https://github.com/MicrosoftDocs/Virtualization-Documentation/blob/13ca4015fd8d4601a937630ca575bdd558a960b5/tlfs/Hypervisor%20Top%20Level%20Functional%20Specification%20v6.0b.pdf
 */
#pragma once

/* Standard Hypervisor CPUID Leaf */
#define CPUID_LEAF_HYPERVISOR           0x40000000
#define CPUID_HYPERVISOR_HV_EBX         0x7263694D /* "Micr" */
#define CPUID_HYPERVISOR_HV_ECX         0x666F736F /* "osof" */
#define CPUID_HYPERVISOR_HV_EDX         0x76482074 /* "t Hv" */

/* Hypervisor Vendor-Neutral Interface Identification */
#define CPUID_LEAF_HV_INTERFACE         0x40000001
#define CPUID_HV_INTERFACE_V1           0x31237648 /* "Hv#1" */

/* Hypervisor Feature Identification */
#define CPUID_LEAF_HV_FEATURES          0x40000003
#define HV_FEATURE_FREQUENCY_MSRS_AVAILABLE (1 << 8)

/* Hypervisor Synthetic MSRs */

/* Specifies the frequency, in Hz, of the TSC, as reported by the hypervisor. */
#define HV_X64_MSR_TSC_FREQUENCY	0x40000022
