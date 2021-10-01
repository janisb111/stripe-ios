//
//  String+Localized.swift
//  StripeIdentity
//
//  Created by Mel Ludowise on 9/27/21.
//

import Foundation
@_spi(STP) import StripeCore

// Localized strings that are used in multiple contexts. Collected here to avoid re-translation
// We use snake case to make long names easier to read.
extension String.Localized {
    static var id_number_title: String {
        STPLocalizedString(
            "ID Number",
            "Label for ID number section"
        )
    }
}